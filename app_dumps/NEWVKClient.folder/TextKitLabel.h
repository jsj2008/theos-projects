/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class TextKitLayer, VKRenderedText;

__attribute__((visibility("hidden")))
@interface TextKitLabel : XXUnknownSuperclass {
	VKRenderedText* _text;
}
@property(readonly, assign, nonatomic) TextKitLayer* textLayer;
@property(retain, nonatomic) VKRenderedText* text;
+(Class)layerClass;
-(void).cxx_destruct;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)frame;
@end
