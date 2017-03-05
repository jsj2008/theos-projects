/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VK_Appearance : XXUnknownSuperclass {
	UIColor* _colorBase;
	UIColor* _colorBaseGray;
	UIColor* _colorLightGray;
	UIColor* _colorBaseRed;
	UIColor* _colorImagePlaceholder;
	UIColor* _colorAdditionalText;
	UIColor* _colorLightText;
	UIColor* _colorCellSeparatorColor;
	UIColor* _colorDarkText;
	UIColor* _colorBottomShadow;
	UIColor* _colorSelectedBackground;
	UIColor* _colorMiniPlayerShadow;
	UIColor* _colorGrayBlurTint;
	UIColor* _colorLightNavigationBar;
	UIColor* _colorActivityIndicator;
	float _onePixelInPoints;
	NSMutableDictionary* _fonts;
}
@property(readonly, assign, nonatomic) UIColor* colorActivityIndicator;
@property(readonly, assign, nonatomic) UIColor* colorLightNavigationBar;
@property(readonly, assign, nonatomic) UIColor* colorGrayBlurTint;
@property(readonly, assign, nonatomic) UIColor* colorMiniPlayerShadow;
@property(readonly, assign, nonatomic) UIColor* colorSelectedBackground;
@property(readonly, assign, nonatomic) UIColor* colorBottomShadow;
@property(readonly, assign, nonatomic) UIColor* colorDarkText;
@property(readonly, assign, nonatomic) UIColor* colorCellSeparatorColor;
@property(readonly, assign, nonatomic) UIColor* colorLightText;
@property(readonly, assign, nonatomic) UIColor* colorAdditionalText;
@property(readonly, assign, nonatomic) UIColor* colorImagePlaceholder;
@property(readonly, assign, nonatomic) UIColor* colorBaseRed;
@property(readonly, assign, nonatomic) UIColor* colorLightGray;
@property(readonly, assign, nonatomic) UIColor* colorBaseGray;
@property(readonly, assign, nonatomic) UIColor* colorBase;
@property(assign, nonatomic) float onePixelInPoints;
@property(retain, nonatomic) NSMutableDictionary* fonts;
+(id)shared;
-(void).cxx_destruct;
-(unsigned)closestFontWeightFromName:(id)name;
-(id)systemFontNameWithWeight:(unsigned)weight;
-(id)helveticaNeueFontNameWithWeight:(unsigned)weight;
-(id)peopleBarButtonWithTarget:(id)target andSelector:(SEL)selector;
-(id)dotAttributedStringWithColor:(id)color;
-(id)fontWithName:(id)name andSize:(float)size;
-(id)onlyHelveticaNeueFontOfSize:(float)size weight:(unsigned)weight;
-(id)onlySystemNeueFontOfSize:(float)size weight:(unsigned)weight;
-(id)fontOfSize:(float)size weight:(unsigned)weight;
-(id)fontClosestToFont:(id)font;
-(id)rightNavigationBarButtonWithTitle:(id)title margin:(float)margin target:(id)target andSelector:(SEL)selector;
-(void)updateStatusBarStyle:(int)style animated:(BOOL)animated;
-(int)currentStatusBarStyle;
-(id)init;
@end

