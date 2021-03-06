/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PromotedNewsList : VKDomain {
	BOOL _unavailable;
	BOOL _hidden;
	NSString* _list_id;
	NSString* _title;
}
@property(assign, nonatomic, getter=isAvailable) BOOL available;
@property(assign, nonatomic, getter=isHidden) BOOL hidden;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* list_id;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

