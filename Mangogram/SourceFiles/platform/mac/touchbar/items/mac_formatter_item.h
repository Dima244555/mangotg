/*
This file is part of Mangogram Desktop,
the official desktop application for the Mangogram messaging service.

For license and copyright information please follow this link:
https://github.com/mangogramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#import <AppKit/NSPopoverTouchBarItem.h>
#import <AppKit/NSTouchBar.h>

API_AVAILABLE(macos(10.12.2))
@interface TextFormatPopover : NSPopoverTouchBarItem
- (id)init:(NSTouchBarItemIdentifier)identifier;
@end
