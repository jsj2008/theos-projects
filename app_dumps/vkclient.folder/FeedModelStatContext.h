/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface FeedModelStatContext : XXUnknownSuperclass {
	int _position;
	NSString* _reference;
	NSString* _type;
}
@property(retain, nonatomic) NSString* type;
@property(retain, nonatomic) NSString* reference;
@property(assign, nonatomic) int position;
+(id)type:(id)type position:(int)position;
-(void).cxx_destruct;
-(id)initWithType:(id)type position:(int)position;
@end

