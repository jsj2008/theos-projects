/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "vkclient-Structs.h"
#import "VKImage.h"

@class NSString, NSNumber, NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface VKFeedAdsItemCard : VKDomain <VKImage> {
	BOOL _statsImpressionHandled;
	BOOL _statsLoadHandled;
	NSString* _title;
	NSNumber* _rating;
	NSString* _descr;
	NSString* _followers;
	NSString* _button;
	NSNumber* _ios_app_id;
	NSString* _ios_app_url;
	NSString* _link_url;
	int _link_url_target;
	NSMutableDictionary* _variants;
	float _ratio;
	NSDictionary* _statistics;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* statistics;
@property(assign, nonatomic) BOOL statsLoadHandled;
@property(assign, nonatomic) BOOL statsImpressionHandled;
@property(assign, nonatomic) float ratio;
@property(retain, nonatomic) NSMutableDictionary* variants;
@property(assign, nonatomic) int link_url_target;
@property(retain, nonatomic) NSString* link_url;
@property(retain, nonatomic) NSString* ios_app_url;
@property(retain, nonatomic) NSNumber* ios_app_id;
@property(retain, nonatomic) NSString* button;
@property(retain, nonatomic) NSString* followers;
@property(retain, nonatomic) NSString* descr;
@property(retain, nonatomic) NSNumber* rating;
@property(retain, nonatomic) NSString* title;
-(id)messagesPlaceholder;
-(XXStruct_UOIMaD)messagesRenderType;
-(BOOL)forceZoom;
-(id)thumbnailUrl;
-(id)fullVariant;
-(id)messagesVariant;
-(id)thumbnailVariant;
-(int)pickSizeForRatio:(float)ratio width:(float)width height:(float)height;
-(BOOL)process:(id)process context:(id)context;
-(void)dealloc;
@end
