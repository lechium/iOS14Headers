//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import "AFAssistantUIService-Protocol.h"
#import "AXPronunciationLanguageListControllerDelegate-Protocol.h"
#import "AXPronunciationSuggestionsViewControllerDelegate-Protocol.h"
#import "AXPronunciationVoiceListControllerDelegate-Protocol.h"
#import "UIDictationViewDisplayDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AXSpeechAction, AXSpeechManager, AXSpeechPronunciationHelper, NSMutableArray, NSString, TTSSubstitution, UIDictationView, UIView;

__attribute__((visibility("hidden")))
@interface AXPronunciationEntryViewController : AXUISettingsBaseListController <UIDictationViewDisplayDelegate, AFAssistantUIService, AXPronunciationSuggestionsViewControllerDelegate, AXPronunciationLanguageListControllerDelegate, AXPronunciationVoiceListControllerDelegate, UITextFieldDelegate>
{
    NSMutableArray *_appSpecifiers;	// 192 = 0xc0
    _Bool _requestingPhonemeData;	// 200 = 0xc8
    _Bool _isRecording;	// 201 = 0xc9
    AXSpeechPronunciationHelper *_pronunciationHelper;	// 208 = 0xd0
    UIDictationView *_dictationView;	// 216 = 0xd8
    UIView *_dictationBackgroundView;	// 224 = 0xe0
    TTSSubstitution *_userSubstitution;	// 232 = 0xe8
    AXSpeechManager *_speechManager;	// 240 = 0xf0
    AXSpeechAction *_lastAction;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000002dc10
@property(retain, nonatomic) AXSpeechAction *lastAction; // @synthesize lastAction=_lastAction;
@property(retain, nonatomic) AXSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) TTSSubstitution *userSubstitution; // @synthesize userSubstitution=_userSubstitution;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000002d828
- (void)editingChanged:(id)arg1;	// IMP=0x000000000002d7f4
- (void)pronunciationLanguageListController:(id)arg1 didSelectLanguages:(id)arg2;	// IMP=0x000000000002d5b8
- (void)pronunciationVoiceListController:(id)arg1 didSelectVoices:(id)arg2;	// IMP=0x000000000002d4e4
- (void)pronunciationSuggestionsViewController:(id)arg1 didSelectPhonemes:(id)arg2;	// IMP=0x000000000002d290
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002d054
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000002cc30
- (id)_language;	// IMP=0x000000000002ca44
- (id)_appliesTo:(id)arg1;	// IMP=0x000000000002c9d4
- (void)_setAppliesTo:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002c904
- (id)_ignoresCase:(id)arg1;	// IMP=0x000000000002c894
- (void)_setIgnoresCase:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002c80c
- (id)_replacementString:(id)arg1;	// IMP=0x000000000002c758
- (void)_setReplacementString:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002c6ac
- (id)_originalString:(id)arg1;	// IMP=0x000000000002c658
- (void)_setOriginalString:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002c5e0
- (void)_hideAppCombinations;	// IMP=0x000000000002c5a0
- (void)_showAppCombinationsAnimated:(_Bool)arg1;	// IMP=0x000000000002c41c
- (_Bool)_save;	// IMP=0x000000000002b5c8
- (id)_assetUpdaterClient;	// IMP=0x000000000002b4b8
- (void)_dictateButtonTapped:(id)arg1;	// IMP=0x000000000002a79c
- (void)_popSuggestionsController:(id)arg1;	// IMP=0x000000000002a3e8
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;	// IMP=0x000000000002a0f4
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029f5c
- (_Bool)_stopRecording;	// IMP=0x0000000000029ef8
- (id)specifiers;	// IMP=0x00000000000299e8
- (void)dealloc;	// IMP=0x0000000000029950
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000298fc
- (void)willResignActive;	// IMP=0x00000000000298b0
- (void)_handleViewHiddenStatus;	// IMP=0x0000000000029830
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000029544
- (void)_calculateAndUpdateDictationStatus:(id)arg1;	// IMP=0x00000000000293c4
- (void)_calculateAndUpdateDictationStatus;	// IMP=0x00000000000293b4
- (void)_updateDictationViewWithStatus:(long long)arg1 withCell:(id)arg2;	// IMP=0x00000000000291cc
- (void)manipulateDictationView:(long long)arg1;	// IMP=0x0000000000028d04
- (_Bool)_usingSupportedDictationLanguage;	// IMP=0x0000000000028ae8
- (_Bool)_supportsPronunciationDictation;	// IMP=0x0000000000028a9c
- (id)_selectedVoice:(id)arg1;	// IMP=0x00000000000288d0
- (void)_manageVoicesSelector;	// IMP=0x0000000000028644
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000028564
- (void)handlePlayButton:(id)arg1;	// IMP=0x0000000000028110
- (void)_substitutionVoiceId:(id *)arg1 andLanguage:(id *)arg2;	// IMP=0x0000000000027e38
- (void)_updatePlayButtonTraits;	// IMP=0x0000000000027d38
- (void)doneButtonPressed;	// IMP=0x0000000000027d28
- (float)nextAudioLevel;	// IMP=0x0000000000027d10
- (void)viewDidLoad;	// IMP=0x000000000002784c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

