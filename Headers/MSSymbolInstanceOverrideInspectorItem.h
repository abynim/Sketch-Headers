//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSOverrideInspectorItem.h"

#import "MSColorInspectorDelegate-Protocol.h"
#import "MSDropableViewDelegate-Protocol.h"
#import "MSStylePartPreviewButtonDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class BCPopover, MSColorInspector, MSForeignObjectMenuBuilder, MSInspectorPopUpButton, MSInspectorPopoverButton, MSStylePartPreviewButton, MSSymbolInstance, MSSymbolMaster, NSButton, NSControl, NSString;

@interface MSSymbolInstanceOverrideInspectorItem : MSOverrideInspectorItem <NSMenuDelegate, MSStylePartPreviewButtonDelegate, MSColorInspectorDelegate, MSDropableViewDelegate>
{
    NSControl *_labelView;
    NSButton *_navigateToMasterButton;
    NSButton *_navigateToInstanceButton;
    MSSymbolMaster *_originalMaster;
    MSInspectorPopoverButton *_popoverButton;
    MSInspectorPopUpButton *_popupButton;
    MSForeignObjectMenuBuilder *_menuBuilder;
    BCPopover *_popover;
    MSColorInspector *_colorInspector;
    MSStylePartPreviewButton *_colorButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSStylePartPreviewButton *colorButton; // @synthesize colorButton=_colorButton;
@property(retain, nonatomic) MSColorInspector *colorInspector; // @synthesize colorInspector=_colorInspector;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSForeignObjectMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(retain, nonatomic) MSInspectorPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
@property(retain, nonatomic) MSInspectorPopoverButton *popoverButton; // @synthesize popoverButton=_popoverButton;
@property(readonly, nonatomic) MSSymbolMaster *originalMaster; // @synthesize originalMaster=_originalMaster;
@property(retain, nonatomic) NSButton *navigateToInstanceButton; // @synthesize navigateToInstanceButton=_navigateToInstanceButton;
@property(retain, nonatomic) NSButton *navigateToMasterButton; // @synthesize navigateToMasterButton=_navigateToMasterButton;
@property(retain, nonatomic) NSControl *labelView; // @synthesize labelView=_labelView;
- (void)restoreWithState_ms:(id)arg1;
- (id)viewRestorationState_ms;
- (BOOL)previewButtonShouldShowColorVariablesButton;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (id)previewColorSpaceForClient:(id)arg1;
- (void)closePopover;
- (void)showPopover;
- (void)togglePopover;
- (void)colorChanged:(id)arg1;
- (void)selectOverride:(id)arg1;
- (void)navigateToOverridesMaster:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)overrideValueAction:(id)arg1;
- (void)pickSymbol:(id)arg1;
- (id)currentReference;
- (id)replaceOverrideSymbolAction;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (id)draggedTypesForView:(id)arg1;
- (id)currentSelectionMenuItem;
- (id)nameOfCurrentNestedSymbol;
- (void)build;
- (void)updateNavigateButton;
- (id)libraryController;
@property(readonly, nonatomic) MSSymbolInstance *firstInstance;
@property(readonly, nonatomic) NSString *originalMasterID;
@property(readonly, nonatomic) NSString *currentMasterID;
- (id)initWithPrimaryOverrideRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

