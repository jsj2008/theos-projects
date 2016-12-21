/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIImageView, VKMImageView, UIButton, NSString, VKMoneyTransfer, UILabel, UIView, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface VKP2PDetailedView : XXUnknownSuperclass {
	BOOL _sizeFromStatus;
	UIButton* _transferAcceptButton;
	UIButton* _transferCancelButton;
	UIButton* _transferRejectButton;
	UIButton* _transferRepeatButton;
	VKMoneyTransfer* _item;
	UILabel* _transferRecipient;
	UILabel* _transferDate;
	VKMImageView* _avatarImageView;
	UILabel* _transferAmount;
	UILabel* _transferAmountCurrency;
	UILabel* _transferAmountSign;
	UILabel* _transferComment;
	UILabel* _transferStatus;
	UIImageView* _transferStatusIcon;
	UIView* _userInfo;
	UIView* _separator;
	UIView* _buttonsSeparator;
	NSString* _currency;
	NSNumberFormatter* _numberFormatter;
}
@property(assign, nonatomic) BOOL sizeFromStatus;
@property(retain, nonatomic) NSNumberFormatter* numberFormatter;
@property(copy, nonatomic) NSString* currency;
@property(retain, nonatomic) UIView* buttonsSeparator;
@property(retain, nonatomic) UIView* separator;
@property(retain, nonatomic) UIButton* transferRepeatButton;
@property(retain, nonatomic) UIButton* transferRejectButton;
@property(retain, nonatomic) UIButton* transferCancelButton;
@property(retain, nonatomic) UIButton* transferAcceptButton;
@property(retain, nonatomic) UIView* userInfo;
@property(retain, nonatomic) UIImageView* transferStatusIcon;
@property(retain, nonatomic) UILabel* transferStatus;
@property(retain, nonatomic) UILabel* transferComment;
@property(retain, nonatomic) UILabel* transferAmountSign;
@property(retain, nonatomic) UILabel* transferAmountCurrency;
@property(retain, nonatomic) UILabel* transferAmount;
@property(retain, nonatomic) VKMImageView* avatarImageView;
@property(retain, nonatomic) UILabel* transferDate;
@property(retain, nonatomic) UILabel* transferRecipient;
@property(retain, nonatomic) VKMoneyTransfer* item;
-(void).cxx_destruct;
-(void)renderItem:(id)item;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(id)init;
@end
