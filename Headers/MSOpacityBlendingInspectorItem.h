//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSInspectorItem.h"

@class MSInlineUpDownNanoTextField, MSMathInspectorValueAdaptor, NSArrayController, NSPopUpButton, NSString;

@interface MSOpacityBlendingInspectorItem : MSInspectorItem
{
    MSInlineUpDownNanoTextField *_opacityField;
    NSPopUpButton *_blendModePopUp;
    NSArrayController *_arrayController;
    MSMathInspectorValueAdaptor *_opacityAdaptor;
}

+ (BOOL)canHandleLayer:(id)arg1;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *opacityAdaptor; // @synthesize opacityAdaptor=_opacityAdaptor;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain, nonatomic) NSPopUpButton *blendModePopUp; // @synthesize blendModePopUp=_blendModePopUp;
@property(retain, nonatomic) MSInlineUpDownNanoTextField *opacityField; // @synthesize opacityField=_opacityField;
- (void).cxx_destruct;
- (void)updateDisplayedValues;
- (void)viewDidLoad;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

