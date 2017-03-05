/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, VK_RequestManager, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VK_Request : XXUnknownSuperclass {
	BOOL _isExecuting;
	BOOL _isCache;
	id _completeBlock;
	id _data;
	NSError* _error;
	VK_RequestManager* _manager;
	NSMutableSet* _delegates;
}
@property(retain, nonatomic) VK_RequestManager* manager;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) id data;
@property(copy, nonatomic) id completeBlock;
@property(readonly, assign, nonatomic) BOOL silentRequest;
@property(readonly, assign, nonatomic) BOOL isCache;
@property(readonly, assign, nonatomic) BOOL isExecuting;
@property(retain, nonatomic) NSMutableSet* delegates;
-(void).cxx_destruct;
-(void)onRequestStopped;
-(void)onRequestCompletedWithResponse:(id)response error:(id)error andCacheFlag:(BOOL)flag;
-(void)resetData;
-(void)setup;
-(id)internalPrepareResponse:(id)response error:(id*)error cached:(BOOL)cached;
-(void)internalRequestCompleted;
-(void)internalRequestStopped;
-(void)internalCancel;
-(void)internalExecuteRequest:(id)request;
-(void)internalValidateParams;
-(void)internalSetup;
-(void)notificateDelegateOnComplete;
-(void)notificateDelegateOnStart;
-(void)unsubscribe:(id)unsubscribe;
-(void)subscribe:(id)subscribe;
-(void)cancel;
-(void)execute;
-(id)init;
@end

