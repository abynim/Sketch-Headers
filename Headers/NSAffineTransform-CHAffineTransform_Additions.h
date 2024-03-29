//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAffineTransform.h>

@interface NSAffineTransform (CHAffineTransform_Additions)
+ (id)transformWithCGAffineTransform_ms:(struct CGAffineTransform)arg1;
+ (id)transformWithOffset:(struct CGPoint)arg1;
+ (id)transformByScaling:(double)arg1;
+ (id)transformByTranslatingXBy:(double)arg1 yBy:(double)arg2;
@property(readonly, nonatomic) BOOL includesFlip;
@property(readonly, nonatomic) double determinant;
- (struct CGAffineTransform)CGAffineTransform_ms;
- (id)invertedTransform;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (void)translateByOffset:(struct CGPoint)arg1;
@end

