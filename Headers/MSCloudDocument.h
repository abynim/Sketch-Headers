//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocument.h"

@class NSURL, NSValue, _TtC6Sketch23MSDocumentChangeCounter;

@interface MSCloudDocument : MSDocument
{
    NSValue *_documentChangeCount;
    long long _numberOfUploadsNotCompleted;
    _TtC6Sketch23MSDocumentChangeCounter *_documentChangeCounter;
}

+ (long long)numberOfFailedUploadsForDocumentURL:(id)arg1;
+ (id)numberOfFailedUploadsFileURLFromDocumentURL:(id)arg1;
+ (BOOL)autosavesInPlace;
@property(retain, nonatomic) _TtC6Sketch23MSDocumentChangeCounter *documentChangeCounter; // @synthesize documentChangeCounter=_documentChangeCounter;
@property(nonatomic) long long numberOfUploadsNotCompleted; // @synthesize numberOfUploadsNotCompleted=_numberOfUploadsNotCompleted;
@property(retain, nonatomic) NSValue *documentChangeCount; // @synthesize documentChangeCount=_documentChangeCount;
- (void).cxx_destruct;
- (id)changeCountTokenForSaveOperation:(unsigned long long)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(unsigned long long)arg2;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)allowsDocumentSharing;
- (void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(struct CGPoint)arg3 withPasteboard:(id)arg4;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (void)requestDocumentOpenStrategy:(CDUnknownBlockType)arg1;
- (id)displayName;
- (void)moveCloudDocumentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cloudShareDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSURL *shareIDFolder;
- (BOOL)isCloudDoc;
- (id)init;
- (id)defaultDraftName;
- (id)fileType;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)showSaveOrRevertSheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveDraftAs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runModalSaveDraftCloudDocPanelForOperationType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)makeLocalFromCloudDocument:(id)arg1;

@end

