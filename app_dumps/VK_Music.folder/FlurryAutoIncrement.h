/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSMutableDictionary;

@interface FlurryAutoIncrement : XXUnknownSuperclass <NSCoding> {
	NSMutableDictionary* counters;
}
@property(retain, nonatomic) NSMutableDictionary* counters;
+(void)setWatchInstance:(id)instance;
+(id)instance;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)resetAll;
-(int)nextCountFor:(int)aFor;
-(id)init;
@end

