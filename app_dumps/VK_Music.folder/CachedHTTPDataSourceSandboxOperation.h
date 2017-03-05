/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSTimer, STKDataSource;
@protocol STKAsyncLoadingDataSource;

__attribute__((visibility("hidden")))
@interface CachedHTTPDataSourceSandboxOperation : XXUnknownSuperclass {
	BOOL _isWaiting;
	BOOL _isExtracted;
	BOOL _stopRunLoop;
	NSString* _identifier;
	NSTimer* _sandboxTimer;
	STKDataSource<STKAsyncLoadingDataSource>* _dataSource;
}
@property(retain, nonatomic) NSString* identifier;
@property(retain, nonatomic) STKDataSource<STKAsyncLoadingDataSource>* dataSource;
@property(retain, nonatomic) NSTimer* sandboxTimer;
@property(assign, nonatomic) BOOL stopRunLoop;
@property(assign, nonatomic) BOOL isExtracted;
@property(assign, nonatomic) BOOL isWaiting;
-(void).cxx_destruct;
-(void)finishRunLoop;
-(void)processRunLoop;
-(void)keepAliveTimeout:(id)timeout;
-(void)configureWithDataSource:(id)dataSource andIdentifier:(id)identifier;
-(id)extractDataSource;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithDataSource:(id)dataSource andIdentifier:(id)identifier;
@end

