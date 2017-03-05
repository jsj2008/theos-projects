/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DDLogger.h"
#import "VK_Music-Structs.h"

@class NSString;
@protocol DDLogFormatter;

@interface DDAbstractLogger : XXUnknownSuperclass <DDLogger> {
	id<DDLogFormatter> _logFormatter;
	dispatch_queue_s* _loggerQueue;
}
@property(readonly, assign, nonatomic) NSString* loggerName;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic, getter=isOnInternalLoggerQueue) BOOL onInternalLoggerQueue;
@property(readonly, assign, nonatomic, getter=isOnGlobalLoggingQueue) BOOL onGlobalLoggingQueue;
@property(assign, nonatomic) dispatch_queue_s* loggerQueue;
@property(retain, nonatomic) id<DDLogFormatter> logFormatter;
-(void).cxx_destruct;
-(void)logMessage:(id)message;
-(void)dealloc;
-(id)init;
@end

