//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSStyleBorder.h>

#import <SketchModel/MSColorUpdateable-Protocol.h>

@class NSArray, NSString;

@interface MSStyleBorder : _MSStyleBorder <MSColorUpdateable>
{
}

- (unsigned long long)styleType;
- (id)asFill;
- (void)multiplyBy:(double)arg1;
- (long long)patternFillType;
- (double)noiseIntensity;
@property(readonly, nonatomic) NSString *CSSAttributeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *updateableColors;

@end

