/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

@interface OrderedDictionary : XXUnknownSuperclass {
	NSMutableDictionary* dictionary;
	NSMutableArray* array;
}
-(void).cxx_destruct;
-(id)descriptionWithLocale:(id)locale indent:(unsigned)indent;
-(id)keyAtIndex:(unsigned)index;
-(void)insertObject:(id)object forKey:(id)key atIndex:(unsigned)index;
-(id)reverseKeyEnumerator;
-(id)keyEnumerator;
-(id)objectForKey:(id)key;
-(unsigned)count;
-(void)removeObjectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)copy;
-(id)initWithCapacity:(unsigned)capacity;
-(id)init;
@end

