/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VK_ProfileBaseInfoModel, VK_Button;

__attribute__((visibility("hidden")))
@interface VK_SubscribeUserView : XXUnknownSuperclass {
	VK_ProfileBaseInfoModel* _profileData;
	VK_Button* _button;
}
@property(retain, nonatomic) VK_ProfileBaseInfoModel* profileData;
@property(assign, nonatomic) __weak VK_Button* button;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)updateSubscribtionStatusForProfileData:(id)profileData;
-(void)onSubscibeBtnPressed;
-(void)setupSubscribeUserView;
-(id)init;
-(void)awakeFromNib;
@end

