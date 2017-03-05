/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TRShuffle;

__attribute__((visibility("hidden")))
@interface ShuffleGenerator : XXUnknownSuperclass {
	int _currentCycle;
	unsigned _seed;
	unsigned _initialIndex;
	unsigned _count;
	unsigned _shuffleInitial;
	TRShuffle* _currentShuffle;
}
-(void).cxx_destruct;
-(void)updateWithRealIndicesDifference:(id)realIndicesDifference;
-(unsigned)getRealIndex:(unsigned)index;
-(void)previousCycle;
-(void)nextCycle;
-(void)resetWithCount:(unsigned)count initialIndex:(unsigned)index;
@end
