/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FlurryRecordTransactionRequestManager : XXUnknownSuperclass {
	NSMutableArray* _transactionRequests;
	NSObject<OS_dispatch_queue>* _sessionResourceAccessQueue;
}
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* sessionResourceAccessQueue;
@property(retain, nonatomic) NSMutableArray* transactionRequests;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)recordTransaction:(id)transaction statusCallback:(id)callback;
-(id)init;
@end

