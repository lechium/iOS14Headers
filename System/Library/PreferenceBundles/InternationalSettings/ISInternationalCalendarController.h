//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class ISInternationalLocaleRepresentation;

@interface ISInternationalCalendarController : PSListController
{
    ISInternationalLocaleRepresentation *_localeRepresentation;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000170b8
@property(retain) ISInternationalLocaleRepresentation *localeRepresentation; // @synthesize localeRepresentation=_localeRepresentation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000016efc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000016d20
- (id)specifiers;	// IMP=0x0000000000016bb8
- (id)init;	// IMP=0x0000000000016b34

@end

