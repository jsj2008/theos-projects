/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"

@class UIVisualEffectView, UIView;

__attribute__((visibility("hidden")))
@interface LNPopupCloseButton : XXUnknownSuperclass {
	UIVisualEffectView* _effectView;
	UIView* _highlightView;
}
@property(readonly, assign, nonatomic) UIVisualEffectView* backgroundView;
-(void).cxx_destruct;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)_setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)_didTouchCancel;
-(void)_didTouchUp;
-(void)_didTouchDragEnter;
-(void)_didTouchDragExit;
-(void)_didTouchDown;
-(id)initWithFrame:(CGRect)frame;
@end

