//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyLanguageLocaleSelectionReceiver-Protocol.h"

@class BuddyLanguageComposite, BuddyLocaleComposite, NSString;
@protocol BuddyLanguageComposite, BuddyLanguageLocaleDataSourceDelegate, BuddyLocaleComposite;

@interface BuddyLanguageLocaleDataSource : NSObject <BuddyLanguageLocaleSelectionReceiver>
{
    id <BuddyLanguageLocaleDataSourceDelegate> _delegate;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    BuddyLanguageComposite *_backingLanguageComposite;	// 24 = 0x18
    BuddyLocaleComposite *_backingLocaleComposite;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000a6be8
@property(retain, nonatomic) BuddyLocaleComposite *backingLocaleComposite; // @synthesize backingLocaleComposite=_backingLocaleComposite;
@property(retain, nonatomic) BuddyLanguageComposite *backingLanguageComposite; // @synthesize backingLanguageComposite=_backingLanguageComposite;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) __weak id <BuddyLanguageLocaleDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)userSelectedLanguageWithLocale:(id)arg1 countryCode:(id)arg2 localePaneScrollOffset:(double)arg3;	// IMP=0x00000001000a6b88
- (void)userSelectedLanguage:(id)arg1;	// IMP=0x00000001000a6b7c
- (void)updateLanguageCompositer;	// IMP=0x00000001000a6780
- (void)_countryScanCompleted;	// IMP=0x00000001000a6774
- (void)_didBecomeActive:(id)arg1;	// IMP=0x00000001000a66a8
@property(readonly, nonatomic) id <BuddyLocaleComposite> localeComposite;
@property(readonly, nonatomic) id <BuddyLanguageComposite> languageComposite;
- (void)dealloc;	// IMP=0x00000001000a6404
- (id)init;	// IMP=0x00000001000a62d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
