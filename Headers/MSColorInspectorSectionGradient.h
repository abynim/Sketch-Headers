//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSColorInspectorSectionWithColorPicker.h"

#import "MSGradientBarViewDelegate-Protocol.h"
#import "MSGradientEventHandlerDelegate-Protocol.h"

@class MSAssetPickerCollectionHeaderController, MSAssetPickerController, MSGradientBarView, MSGradientEventHandler, MSInlineUpDownNanoTextField, MSMathInspectorValueAdaptor, MSTextLabelForUpDownField, NSArrayController, NSButton, NSString;

@interface MSColorInspectorSectionGradient : MSColorInspectorSectionWithColorPicker <MSGradientEventHandlerDelegate, MSGradientBarViewDelegate>
{
    MSGradientBarView *_gradientBarView;
    long long _gradientType;
    MSGradientEventHandler *_gradientHandler;
    MSAssetPickerController *_secondaryAssetPickerController;
    NSButton *_rotateLeftButton;
    NSButton *_rotateRightButton;
    MSInlineUpDownNanoTextField *_opacityField;
    MSTextLabelForUpDownField *_opacityLabel;
    MSMathInspectorValueAdaptor *_opacityAdaptor;
    MSAssetPickerCollectionHeaderController *_gradientHeader;
    MSAssetPickerCollectionHeaderController *_colorHeader;
    NSArrayController *_arrayController;
}

+ (BOOL)canHandleStylePart:(id)arg1;
+ (id)filterSelection:(id)arg1;
+ (id)presetPickerVisibilityDefaultsKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain, nonatomic) MSAssetPickerCollectionHeaderController *colorHeader; // @synthesize colorHeader=_colorHeader;
@property(retain, nonatomic) MSAssetPickerCollectionHeaderController *gradientHeader; // @synthesize gradientHeader=_gradientHeader;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *opacityAdaptor; // @synthesize opacityAdaptor=_opacityAdaptor;
@property(retain, nonatomic) MSTextLabelForUpDownField *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(retain, nonatomic) MSInlineUpDownNanoTextField *opacityField; // @synthesize opacityField=_opacityField;
@property(nonatomic) __weak NSButton *rotateRightButton; // @synthesize rotateRightButton=_rotateRightButton;
@property(nonatomic) __weak NSButton *rotateLeftButton; // @synthesize rotateLeftButton=_rotateLeftButton;
@property(retain, nonatomic) MSAssetPickerController *secondaryAssetPickerController; // @synthesize secondaryAssetPickerController=_secondaryAssetPickerController;
@property(retain, nonatomic) MSGradientEventHandler *gradientHandler; // @synthesize gradientHandler=_gradientHandler;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) __weak MSGradientBarView *gradientBarView; // @synthesize gradientBarView=_gradientBarView;
- (id)toolTipForAltButton:(id)arg1 alternate:(BOOL)arg2;
- (BOOL)assetPickerController:(id)arg1 shouldChangeToDisplayMode:(unsigned long long)arg2;
- (unsigned long long)assetType;
- (void)dealloc;
- (void)closeGradientHandler;
- (void)popoverWillClose;
- (id)gradients;
- (void)flipGradient:(id)arg1;
- (void)gradientTypeSelected:(id)arg1;
- (void)rotateGradientAction:(id)arg1;
- (void)updateOtherGradientsToReflectChanges;
- (void)colorPickerChangedTo:(id)arg1;
- (id)currentlySelectedColor;
- (void)switchToGradientHandler;
- (void)assetPickerController:(id)arg1 didSelectDataSource:(id)arg2;
- (void)controlDidSelectAsset:(id)arg1;
- (id)createPresetFromCurrentSelection;
- (void)setStyleParts:(id)arg1;
- (void)highlightCurrentGradient;
- (void)gradientHandlerDidChangeGradient:(id)arg1;
- (void)gradientHandlerWillLoseFocus:(id)arg1;
- (void)gradientHandlerDidChangeCurrentPoint:(id)arg1;
- (void)gradientBarChanged:(id)arg1;
- (void)gradientBarDidChangeSelectedStop:(id)arg1;
- (unsigned long long)fillType;
- (void)switchToGradientHandlerIfNecessary;
- (void)validate;
- (id)allSecondaryAssetPickerDataSources;
- (id)secondaryAssetPickerDataSources;
- (id)assetPickerDataSources;
- (id)scrollableViews;
- (id)headerViews;
- (id)gradientBarViewPreviewColorSpace:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateUIAfterGradientChange;
- (void)viewDidLoad;
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

