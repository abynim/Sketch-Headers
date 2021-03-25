//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSCoEditDocumentOpenerDelegate-Protocol.h"

@class NSError;

@interface MSDocumentOpeningContext : NSObject <MSCoEditDocumentOpenerDelegate>
{
    BOOL _isReload;
    BOOL _displayProgress;
    BOOL _isDisplayingProgress;
}

@property(nonatomic) BOOL isDisplayingProgress; // @synthesize isDisplayingProgress=_isDisplayingProgress;
@property(nonatomic) BOOL displayProgress; // @synthesize displayProgress=_displayProgress;
@property(nonatomic) BOOL isReload; // @synthesize isReload=_isReload;
- (id)makeErrorPresentable:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSError *betaDisabledError;
- (void)didProcessCloudDocument:(id)arg1;
- (void)willProcessCloudDocument:(id)arg1;
- (BOOL)shouldMigrateDocumentInCoedit:(id)arg1;
- (BOOL)shouldOpenExistingDocument:(id)arg1;
- (BOOL)shouldDiscardLocalCoeditChanges:(id)arg1;
- (BOOL)shouldOpenNewerDocument:(id)arg1;
- (void)migrationNotAvailable:(id)arg1;
- (BOOL)shouldOpenDocumentWithCorruptMetadata:(id)arg1;
- (BOOL)shouldOpenDocument:(id)arg1 withMissingFonts:(id)arg2 savingWillChangeFonts:(BOOL)arg3;
- (BOOL)shouldAttemptToOpenCorruptDocument:(id)arg1;
- (void)dealloc;
- (id)init;

@end
