//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSNestedInspectorSection.h"

#import "MSInspectorSectionDelegate-Protocol.h"

@class MSBlurInspectorViewController, MSCollapsibleHeaderInspectorItem, MSColorControlsInspectorViewController, MSMultipleBorderInspectorViewController, MSMultipleFillInspectorViewController, MSMultipleInnerShadowInspectorViewController, MSMultipleShadowInspectorViewController, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MSStyleInspectorSection : MSNestedInspectorSection <MSInspectorSectionDelegate>
{
    MSCollapsibleHeaderInspectorItem *_headerItem;
    NSArray *_currentControllers;
    NSDictionary *_restorationInfo;
    NSMutableDictionary *_stylePartViewControllers;
}

@property(retain, nonatomic) NSMutableDictionary *stylePartViewControllers; // @synthesize stylePartViewControllers=_stylePartViewControllers;
@property(retain, nonatomic) NSDictionary *restorationInfo; // @synthesize restorationInfo=_restorationInfo;
@property(retain, nonatomic) NSArray *currentControllers; // @synthesize currentControllers=_currentControllers;
@property(retain, nonatomic) MSCollapsibleHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)refreshIfNecessary:(id)arg1;
- (void)sectionWithIdentifierWillCollapse:(id)arg1;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (void)showBorderOptionsAction:(id)arg1;
- (void)showFillOptionsAction:(id)arg1;
- (void)restorePopover;
- (void)closeAnyColorPopoverImmediately:(BOOL)arg1;
- (void)closeAnyColorPopover;
@property(readonly, nonatomic) MSColorControlsInspectorViewController *colorControlsViewController;
@property(readonly, nonatomic) MSBlurInspectorViewController *blurViewController;
@property(readonly, nonatomic) MSMultipleInnerShadowInspectorViewController *innerShadowViewController;
@property(readonly, nonatomic) MSMultipleShadowInspectorViewController *shadowViewController;
@property(readonly, nonatomic) MSMultipleBorderInspectorViewController *borderViewController;
@property(readonly, nonatomic) MSMultipleFillInspectorViewController *fillViewController;
- (void)openPopoverForStylePart:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 preferringNative:(BOOL)arg3;
- (id)stylePartViewControllerOfType:(unsigned long long)arg1;
- (Class)viewControllerClassForType:(unsigned long long)arg1;
- (id)views;
@property(readonly, nonatomic) BOOL hasContent;
- (void)updateItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

