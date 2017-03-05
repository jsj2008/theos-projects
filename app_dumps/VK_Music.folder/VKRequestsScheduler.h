/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKObject.h"

@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VKRequestsScheduler : VKObject {
	NSObject<OS_dispatch_queue>* _schedulerQueue;
	int _currentLimitPerSecond;
	NSMutableDictionary* _scheduleDict;
	BOOL _enabled;
}
+(id)instance;
-(void).cxx_destruct;
-(void)scheduleRequest:(id)request;
-(double)currentAvailableInterval;
-(void)setEnabled:(BOOL)enabled;
-(id)init;
@end

