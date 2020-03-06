//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BCArrayComparison : NSObject
{
    NSArray *_changes;
    NSArray *_oldArray;
    NSArray *_modifiedArray;
    CDUnknownBlockType _comparator;
    struct DiffPath *_furthestPath;
}

@property(nonatomic) struct DiffPath *furthestPath; // @synthesize furthestPath=_furthestPath;
@property(nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(nonatomic) NSArray *modifiedArray; // @synthesize modifiedArray=_modifiedArray;
@property(nonatomic) NSArray *oldArray; // @synthesize oldArray=_oldArray;
- (void).cxx_destruct;
- (void)inferMoves;
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
- (void)computeChanges;
- (void)backTraceChangesFrom:(struct DiffPathItem *)arg1;
- (struct DiffPathItem *)fillNextDiffPath;
- (struct DiffPathItem *)findFurthestSnakeForItem:(struct DiffPathItem *)arg1 withDiagonal:(long long)arg2 movingAcross:(BOOL)arg3;
- (void)dealloc;
- (id)initWithOldArray:(id)arg1 modifiedArray:(id)arg2 startPoint:(unsigned long long)arg3 comparator:(CDUnknownBlockType)arg4;

@end

