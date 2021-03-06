/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BarButtonBuilder, NSString;

__attribute__((visibility("hidden")))
@interface Action : XXUnknownSuperclass {
	NSString* _title;
	NSString* _picto;
	id _target;
	BarButtonBuilder* _buttonBuilder;
	id _complete;
	NSString* _track_code;
}
@property(copy, nonatomic) NSString* track_code;
@property(copy, nonatomic) id complete;
@property(retain, nonatomic) BarButtonBuilder* buttonBuilder;
@property(retain, nonatomic) id target;
@property(retain, nonatomic) NSString* picto;
@property(retain, nonatomic) NSString* title;
+(id)target:(id)target;
-(void).cxx_destruct;
-(void)fireInContext:(id)context;
-(void)runInContext:(id)context;
-(id)fullTitle;
-(id)defaultTitle;
-(id)withComplete:(id)complete;
-(id)withButton:(id)button;
-(id)withPicto:(id)picto;
-(id)withTitle:(id)title;
@end

