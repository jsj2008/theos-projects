/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class FABCertificatePinner, NSURLSession, NSString;

@interface FABNetworkClient : XXUnknownSuperclass <NSURLSessionDelegate, NSURLSessionTaskDelegate> {
	FABCertificatePinner* _certPinner;
	NSURLSession* _session;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSURLSession* session;
@property(readonly, assign, nonatomic) FABCertificatePinner* certPinner;
-(void).cxx_destruct;
-(void)URLSession:(id)session didReceiveChallenge:(id)challenge completionHandler:(id)handler;
-(void)URLSession:(id)session didBecomeInvalidWithError:(id)error;
-(void)invalidateAndCancel;
-(void)startDownloadTaskWithRequest:(id)request completionHandler:(id)handler;
-(void)startDownloadTaskWithRequest:(id)request retryLimit:(unsigned)limit completionHandler:(id)handler;
-(void)startDownloadTaskWithRequest:(id)request retryLimit:(unsigned)limit tries:(unsigned)tries completionHandler:(id)handler;
-(void)startDataTaskWithRequest:(id)request completionHandler:(id)handler;
-(void)startDataTaskWithRequest:(id)request retryLimit:(unsigned)limit completionHandler:(id)handler;
-(void)startDataTaskWithRequest:(id)request retryLimit:(unsigned)limit tries:(unsigned)tries completionHandler:(id)handler;
-(void)runAfterRetryValueFromResponse:(id)response attempts:(unsigned)attempts block:(id)block;
-(void)runAfterRetryValueFromResponse:(id)response attempts:(unsigned)attempts onQueue:(id)queue block:(id)block;
-(double)computeDelayForResponse:(id)response withRetryCount:(unsigned)retryCount;
-(double)generateRandomJitter;
-(double)randomDoubleWithMin:(double)min max:(double)max;
-(void)dealloc;
-(id)initWithSessionConfiguration:(id)sessionConfiguration queue:(id)queue pinnedCertificates:(id)certificates;
-(id)initWithQueue:(id)queue pinnedCertificates:(id)certificates;
-(id)initWithQueue:(id)queue;
-(id)init;
@end

