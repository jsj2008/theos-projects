/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CommentPostSourceDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class UIView, NSString, CommentPostSourceController;
@protocol CommentSourcePickerDelegate;

__attribute__((visibility("hidden")))
@interface CommentSourcePickerController : XXUnknownSuperclass <CommentPostSourceDelegate, UIViewControllerTransitioningDelegate> {
	id<CommentSourcePickerDelegate> _delegate;
	UIView* _backdropView;
	UIView* _containerView;
	CommentPostSourceController* _contentController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<CommentSourcePickerDelegate> delegate;
@property(retain, nonatomic) CommentPostSourceController* contentController;
@property(retain, nonatomic) UIView* containerView;
@property(retain, nonatomic) UIView* backdropView;
-(void).cxx_destruct;
-(id)animationControllerForDismissedController:(id)dismissedController;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
-(void)commentPostSourceController:(id)controller didSelectSource:(id)source;
-(void)dismissPicker;
-(id)contentControllerView;
-(void)displayContentController:(id)controller;
-(void)actionCancelButton:(id)button;
-(id)cancelButtonImageWithColor:(id)color;
-(void)addCancelButton;
-(void)addHeader;
-(void)addContainerViewTopRoundedMask;
-(void)addContainerView;
-(void)handleBackdropTap;
-(void)addBackdropView;
-(void)viewDidLoad;
-(id)initWithMain:(id)main sources:(id)sources;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
@end

