//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDocumentAction.h"

@class NSString;

@interface MSApplyConstrainProportionsAction : MSDocumentAction
{
}

- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (void)doPerformAction:(id)arg1;
@property(nonatomic, readonly) NSString *label;
@property(nonatomic, readonly) BOOL isActive;
@property(nonatomic, readonly) BOOL validate;
- (void)applyConstrainProportions:(id)arg1;

@end

