//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSColor;

@interface MSWorkspaceWindowTextField : NSTextField
{
    // Error parsing type: , name: nonEditingLineBreakMode
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)endEditing;
- (void)startEditing;
- (void)textDidEndEditing:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)confirm:(id)arg1;
@property(nonatomic, retain) NSColor *textColor;

@end

