//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSharedSymbolAction.h"

@interface MSReplaceWithSymbolAction : MSSharedSymbolAction
{
    id <NSObject> _documentCloseObserver;
}

@property(retain, nonatomic) id <NSObject> documentCloseObserver; // @synthesize documentCloseObserver=_documentCloseObserver;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)removeDocumentCloseObserver;
- (BOOL)showInToolbar;
- (void)doPerformAction:(id)arg1;
- (BOOL)hasSubMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validate;
- (SEL)preferredMenuAction;
- (void)replaceWithSymbol:(id)arg1;

@end

