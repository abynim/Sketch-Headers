//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

@interface MSScriptDocument : NSDocument
{
}

- (BOOL)showBundleIncompatibleAlert:(id)arg1;
- (BOOL)showBundleAlreadyInstalledAlert:(id)arg1 isIncompatible:(BOOL)arg2 existingPlugin:(id)arg3;
- (BOOL)showBundleUpgradeAlert:(id)arg1 isIncompatible:(BOOL)arg2 existingPlugin:(id)arg3;
- (id)titleFromPlugin:(id)arg1;
- (BOOL)copyPluginBundle:(id)arg1 toPluginsFolderURL:(id)arg2;
- (void)removeExistingPlugin:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

