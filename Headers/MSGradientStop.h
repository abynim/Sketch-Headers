//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSGradientStop.h>

#import <SketchModel/MSColorUpdateable-Protocol.h>

@class NSString;

@interface MSGradientStop : _MSGradientStop <MSColorUpdateable>
{
}

+ (id)stopWithPosition:(double)arg1 color:(id)arg2;
- (void)updateColorsUsing:(id)arg1;
- (double)cappedBounds:(double)arg1;
- (void)setPosition:(double)arg1;
- (id)initWithPosition:(double)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

