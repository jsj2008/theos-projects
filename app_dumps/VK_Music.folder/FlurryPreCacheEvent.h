/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface FlurryPreCacheEvent : XXUnknownSuperclass {
	BOOL _timed;
	NSString* _eventName;
	NSDictionary* _params;
}
@property(assign, nonatomic) BOOL timed;
@property(retain, nonatomic) NSDictionary* params;
@property(retain, nonatomic) NSString* eventName;
-(void).cxx_destruct;
-(id)initWithEventName:(id)eventName params:(id)params timed:(BOOL)timed;
@end

