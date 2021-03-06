/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKAttachment.h"
#import "VKLinkable.h"
#import "VKClient-Structs.h"
#import "VKRenderable.h"

@class NSString, VKPlace;

__attribute__((visibility("hidden")))
@interface VKGeo : VKRenderable <VKLinkable, VKAttachment> {
	NSString* _title;
	VKPlace* _geoPlace;
	CLLocationCoordinate2D _coordinate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKPlace* geoPlace;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) CLLocationCoordinate2D coordinate;
+(id)linkIcon;
+(id)geo:(id)geo;
-(void).cxx_destruct;
-(id)attachmentButtonTitle;
-(id)attachmentIco;
-(id)attachmentImage;
-(id)attachmentStatus:(BOOL)status;
-(id)attachmentTitle;
-(id)attachmentPlaceholder;
-(id)linkText;
-(Class)rendererClass;
@end

