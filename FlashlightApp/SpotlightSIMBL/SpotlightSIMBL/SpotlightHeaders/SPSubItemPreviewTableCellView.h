//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSImageView, NSTextField;

@interface SPSubItemPreviewTableCellView : NSTableCellView
{
    NSTextField *_dateField;
    NSImageView *_iconView;
}

@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property __weak NSTextField *dateField; // @synthesize dateField=_dateField;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;

// Remaining properties
@property __weak NSTextField *textField;

@end

