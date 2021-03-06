/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSMutableArray, UIColor, UIBezierPath;
@protocol SketchDrawViewDelegate;

__attribute__((visibility("hidden")))
@interface SketchDrawView : XXUnknownSuperclass {
	id<SketchDrawViewDelegate> _delegate;
	UIColor* _brushColor;
	float _brushWidth;
	UIImage* _cachedImage;
	NSMutableArray* _currentPoints;
	UIBezierPath* _currentPath;
	NSMutableArray* _wholePaths;
}
@property(assign, nonatomic) float brushWidth;
@property(retain, nonatomic) UIColor* brushColor;
@property(assign, nonatomic) __weak id<SketchDrawViewDelegate> delegate;
@property(retain, nonatomic) NSMutableArray* wholePaths;
@property(retain, nonatomic) UIBezierPath* currentPath;
@property(retain, nonatomic) NSMutableArray* currentPoints;
@property(retain, nonatomic) UIImage* cachedImage;
-(void).cxx_destruct;
-(void)finishDrawingAtPoint:(CGPoint)point;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(CGRect)calculateEnclosingFrame;
-(id)renderEnclosingImage;
-(void)clearAll;
-(void)undo;
-(BOOL)hasAnyToErase;
-(BOOL)hasAnyToUndo;
-(BOOL)hasAnyToSend;
-(void)drawRect:(CGRect)rect;
-(void)updateCachedImage;
-(void)processTouchIsLast:(BOOL)last;
-(id)initWithFrame:(CGRect)frame;
@end

