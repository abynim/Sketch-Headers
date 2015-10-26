#import "MSBaseAction.h"

@interface MSCreateSymbolAction : MSBaseAction
{
}

- (void)refreshUI;
- (void)isolateSymbolAction:(id)arg1;
- (BOOL)willIsolate;
- (void)toggleCreateSymbolOrIsolate:(id)arg1;
- (id)layerSymbols;
- (id)toolbarLabel;
- (id)imageName;
- (void)renameSymbolInInspector;
- (void)prepareGroupForSymbol:(id)arg1;
- (void)moveSlicesOutOfGroup:(id)arg1;
- (id)groupForCreatingSymbolsFromLayers:(id)arg1;
- (BOOL)unHideLayersIfNecessary:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (BOOL)validate;
- (BOOL)validateMenuItem:(id)arg1;
- (void)createSymbolAction:(id)arg1;

@end

