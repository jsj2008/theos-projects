/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VK_BaseLabel, UILabel, UIButton, UISegmentedControl, UIImageView, VK_SubscribeUserView, UIView, NSLayoutConstraint, VK_UserBaseInfoModel;
@protocol VK_ProfileHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface VK_ProfileHeaderView : XXUnknownSuperclass {
	id<VK_ProfileHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UISegmentedControl* _segmentControl;
	UIButton* _backButton;
	UIView* _navBarContainer;
	UIView* _extendedView;
	UIView* _extendedViewShadow;
	UIImageView* _avatarImageView;
	VK_BaseLabel* _nameLabel;
	VK_BaseLabel* _vkURLLabel;
	NSLayoutConstraint* _extendedViewHiddingConstraint;
	VK_UserBaseInfoModel* _currentProfileModel;
	VK_SubscribeUserView* _subscribeView;
	UIImageView* _verifiedMark;
}
@property(assign, nonatomic) __weak id<VK_ProfileHeaderViewDelegate> delegate;
@property(assign, nonatomic) __weak UIImageView* verifiedMark;
@property(assign, nonatomic) __weak VK_SubscribeUserView* subscribeView;
@property(retain, nonatomic) VK_UserBaseInfoModel* currentProfileModel;
@property(retain, nonatomic) NSLayoutConstraint* extendedViewHiddingConstraint;
@property(assign, nonatomic) __weak VK_BaseLabel* vkURLLabel;
@property(assign, nonatomic) __weak VK_BaseLabel* nameLabel;
@property(assign, nonatomic) __weak UIImageView* avatarImageView;
@property(assign, nonatomic) __weak UIView* extendedViewShadow;
@property(assign, nonatomic) __weak UIView* extendedView;
@property(assign, nonatomic) __weak UIView* navBarContainer;
@property(assign, nonatomic) __weak UIButton* backButton;
@property(assign, nonatomic) __weak UISegmentedControl* segmentControl;
@property(assign, nonatomic) __weak UILabel* titleLabel;
-(void).cxx_destruct;
-(void)backButtonPressed:(id)pressed;
-(void)segmentControllerValueChanged;
-(void)updateNavBar;
-(void)updateSegmentedControl;
-(void)forcedSelectSegment:(unsigned)segment;
-(void)showExtendedView:(BOOL)view;
-(void)updateExtendedViewContent:(id)content;
-(void)onProfileURLPressed:(id)pressed;
-(void)updateInfoView;
-(void)updateState;
-(void)setupProfileHeaderView;
-(void)awakeFromNib;
@end

