//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseSharedObjectAction.h"

@interface MSCreateSharedStyleAction : MSBaseSharedObjectAction
{
}

- (BOOL)validate;
- (long long)validationStatus;
- (id)label;
- (BOOL)needsRenameAfterAction;
- (void)performSharedObjectAction;
- (void)createSharedStyle:(id)arg1;

@end

