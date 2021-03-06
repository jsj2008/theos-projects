/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class VKMImageView, UILabel;

__attribute__((visibility("hidden")))
@interface GroupCell : VKMCell {
	VKMImageView* _imageLoadingView;
	UILabel* _name;
	UILabel* _status;
}
@property(readonly, retain, nonatomic) UILabel* status;
@property(readonly, retain, nonatomic) UILabel* name;
@property(retain, nonatomic) VKMImageView* imageLoadingView;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)willTransitionToState:(unsigned)state;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

