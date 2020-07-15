//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSSliceLayer.h>

#import <SketchModel/MSColorUpdateable-Protocol.h>
#import <SketchModel/MSLayerWithMutableBackgroundColor-Protocol.h>

@class MSColor, NSString;

@interface MSSliceLayer : _MSSliceLayer <MSLayerWithMutableBackgroundColor, MSColorUpdateable>
{
}

- (void)changeColor:(id)arg1;
- (void)updateColorsUsing:(id)arg1;
- (id)immutableBackgroundColor;
- (id)rootForNameUniquing;
- (BOOL)canRotate;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;

// Remaining properties
@property(retain, nonatomic) MSColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

