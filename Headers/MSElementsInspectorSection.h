#import "CHViewController.h"

#import "NSMenuDelegate.h"

@class MSSharedObject, NSArray, NSButton, NSImage, NSPopUpButton, NSString, NSTextField;

@interface MSElementsInspectorSection : CHViewController <NSMenuDelegate>
{
    NSArray *_layers;
    NSButton *_layerStyleToggle;
    NSButton *_textStyleToggle;
    NSPopUpButton *_sharedObjectsPopUpButton;
    NSTextField *_editNameField;
    NSImage *_initialImage;
    MSSharedObject *_renamingObject;
    CDUnknownBlockType _renameBlock;
}

@property(copy, nonatomic) CDUnknownBlockType renameBlock; // @synthesize renameBlock=_renameBlock;
@property(retain, nonatomic) MSSharedObject *renamingObject; // @synthesize renamingObject=_renamingObject;
@property(retain, nonatomic) NSImage *initialImage; // @synthesize initialImage=_initialImage;
@property(retain, nonatomic) NSTextField *editNameField; // @synthesize editNameField=_editNameField;
@property(retain, nonatomic) NSPopUpButton *sharedObjectsPopUpButton; // @synthesize sharedObjectsPopUpButton=_sharedObjectsPopUpButton;
@property(retain, nonatomic) NSButton *textStyleToggle; // @synthesize textStyleToggle=_textStyleToggle;
@property(retain, nonatomic) NSButton *layerStyleToggle; // @synthesize layerStyleToggle=_layerStyleToggle;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)dealloc;
- (id)document;
- (void)applySharedObject:(id)arg1 toLayer:(id)arg2;
- (struct MSModelObject *)firstSharedObjectFromLayers:(unsigned long long)arg1;
- (struct MSModelObject *)sharedObjectOfType:(unsigned long long)arg1 fromLayer:(id)arg2;
- (id)sharedObjectContainerOfType:(unsigned long long)arg1;
- (BOOL)hasGroupLayers;
- (BOOL)hasOnlyTextLayers;
- (BOOL)layer:(id)arg1 conformsToType:(unsigned long long)arg2;
- (unsigned long long)sharedObjectType;
- (void)generatePreviewForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)isolateSelectedObject:(id)arg1;
- (void)applySharedObjectToSelection:(id)arg1;
- (void)renameSharedObjectAction:(id)arg1;
- (void)renameSharedObject:(id)arg1;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)createNewSharedObject:(id)arg1;
- (void)showManageSymbolsSheet:(id)arg1;
- (id)displayNameForType:(unsigned long long)arg1;
- (id)currentSharedObject;
- (void)duplicateSymbolAction:(id)arg1;
- (void)reloadMenu;
- (BOOL)symbolInstances:(id)arg1 couldSwitchToSymbol:(id)arg2;
- (unsigned long long)selectedMenuIndexForType:(unsigned long long)arg1;
- (void)updateMenuSelectionToIndex:(unsigned long long)arg1;
- (void)prepareForDisplay;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

