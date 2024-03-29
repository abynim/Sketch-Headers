//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSColorStylePartInspectorViewController.h"

#import "MSColorHexStringTransformerDelegate-Protocol.h"
#import "MSFieldRestoration-Protocol.h"

@class MSColorHexStringTransformer, MSInlineUpDownTextField, MSMathInspectorValueAdaptor, NSArrayController, NSDictionary, NSMutableDictionary, NSPopUpButton, NSString, NSTextField;

@interface MSFillInspectorViewController : MSColorStylePartInspectorViewController <MSColorHexStringTransformerDelegate, MSFieldRestoration>
{
    BOOL _isDisplayingTint;
    MSInlineUpDownTextField *_opacityField;
    NSPopUpButton *_fillPropertiesPopUp;
    NSArrayController *_fills;
    MSMathInspectorValueAdaptor *_opacityAdaptor;
    NSTextField *_opacityLabel;
    NSTextField *_fillTypeLabel;
    NSTextField *_contextPopUpLabel;
    NSTextField *_hexField;
    MSColorHexStringTransformer *_hexTransformer;
    NSMutableDictionary *_loadedImages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadedImages; // @synthesize loadedImages=_loadedImages;
@property(retain, nonatomic) MSColorHexStringTransformer *hexTransformer; // @synthesize hexTransformer=_hexTransformer;
@property(retain, nonatomic) NSTextField *hexField; // @synthesize hexField=_hexField;
@property(retain, nonatomic) NSTextField *contextPopUpLabel; // @synthesize contextPopUpLabel=_contextPopUpLabel;
@property(retain, nonatomic) NSTextField *fillTypeLabel; // @synthesize fillTypeLabel=_fillTypeLabel;
@property(retain, nonatomic) NSTextField *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *opacityAdaptor; // @synthesize opacityAdaptor=_opacityAdaptor;
@property(retain, nonatomic) NSArrayController *fills; // @synthesize fills=_fills;
@property(nonatomic) BOOL isDisplayingTint; // @synthesize isDisplayingTint=_isDisplayingTint;
@property(retain, nonatomic) NSPopUpButton *fillPropertiesPopUp; // @synthesize fillPropertiesPopUp=_fillPropertiesPopUp;
@property(retain, nonatomic) MSInlineUpDownTextField *opacityField; // @synthesize opacityField=_opacityField;
@property(readonly, copy, nonatomic) NSDictionary *restorableFields;
- (id)currentColorValueForTransformer:(id)arg1;
- (void)updateDisplayedSwatchValues;
- (void)fillPropertiesAction:(id)arg1;
- (void)refreshIfNecessary:(id)arg1;
- (void)updateDisplayedValues;
- (void)bumpKVOValue:(id)arg1;
- (void)hexFieldAction:(id)arg1;
- (void)updateFillPropertyPopUp;
- (void)applyUserSelectedColors:(id)arg1;
- (id)readImagesFromPasteboard:(id)arg1;
- (id)imageDataForURL:(id)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)draggedTypesForView:(id)arg1;
- (void)prepareForReuse;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

