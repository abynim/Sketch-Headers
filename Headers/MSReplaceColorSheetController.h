//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Chocolat/CHSheetController.h>

#import "MSColorWellDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class MSColorWell, MSStylePartPreviewButton, NSButton, NSMenu, NSString;

@interface MSReplaceColorSheetController : CHSheetController <MSColorWellDelegate, NSWindowDelegate, NSMenuDelegate>
{
    NSButton *_cancelButton;
    NSButton *_ignoreAlphaWhenMatchingOriginalColorButton;
    MSStylePartPreviewButton *_originalColorButton;
    MSColorWell *_replacementColorButton;
    NSButton *_keepAlphaOfOriginalColorButton;
    NSButton *_replaceButton;
    NSMenu *_frequentColorsMenu;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMenu *frequentColorsMenu; // @synthesize frequentColorsMenu=_frequentColorsMenu;
@property(nonatomic) __weak NSButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property(nonatomic) __weak NSButton *keepAlphaOfOriginalColorButton; // @synthesize keepAlphaOfOriginalColorButton=_keepAlphaOfOriginalColorButton;
@property(nonatomic) __weak MSColorWell *replacementColorButton; // @synthesize replacementColorButton=_replacementColorButton;
@property(nonatomic) __weak MSStylePartPreviewButton *originalColorButton; // @synthesize originalColorButton=_originalColorButton;
@property(nonatomic) __weak NSButton *ignoreAlphaWhenMatchingOriginalColorButton; // @synthesize ignoreAlphaWhenMatchingOriginalColorButton=_ignoreAlphaWhenMatchingOriginalColorButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (BOOL)previewButtonShouldShowColorVariablesButton;
- (id)documentColorSpaceForClient:(id)arg1;
- (id)previewColorSpaceForClient:(id)arg1;
- (id)initialColorPickerColorForColorWell:(id)arg1;
- (void)confirm:(id)arg1;
- (void)disableUI;
- (void)validateUI;
- (void)validateReplaceButton;
- (void)replacementColorAction:(id)arg1;
- (void)validateReplacementColorButton;
- (void)setOriginalColor:(id)arg1;
- (void)commitOriginalColor:(id)arg1;
- (void)pickOriginalColor:(id)arg1;
- (void)validateOriginalColorButton;
- (void)refreshOriginalColorButtonFromSelection;
- (void)menuNeedsUpdate:(id)arg1;
- (void)updateFrequentColorsMenu;
- (void)toggleIgnoreAlpha:(id)arg1;
- (id)currentDocument;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

