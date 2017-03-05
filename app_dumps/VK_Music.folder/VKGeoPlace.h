/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKApiObject.h"

@class NSString, NSNumber;

@interface VKGeoPlace : VKApiObject {
	NSNumber* _id;
	NSString* _title;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _created;
	NSString* _icon;
	NSNumber* _group_id;
	NSNumber* _group_photo;
	NSNumber* _checkins;
	NSNumber* _updated;
	NSNumber* _type;
	NSNumber* _country;
	NSString* _city;
	NSString* _address;
	NSNumber* _showmap;
}
@property(retain, nonatomic) NSNumber* showmap;
@property(retain, nonatomic) NSString* address;
@property(retain, nonatomic) NSString* city;
@property(retain, nonatomic) NSNumber* country;
@property(retain, nonatomic) NSNumber* type;
@property(retain, nonatomic) NSNumber* updated;
@property(retain, nonatomic) NSNumber* checkins;
@property(retain, nonatomic) NSNumber* group_photo;
@property(retain, nonatomic) NSNumber* group_id;
@property(retain, nonatomic) NSString* icon;
@property(retain, nonatomic) NSNumber* created;
@property(retain, nonatomic) NSNumber* longitude;
@property(retain, nonatomic) NSNumber* latitude;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSNumber* id;
-(void).cxx_destruct;
@end

