//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray, SCROBrailleClient, SCROMobileBrailleDisplayInputManager, VOSBluetoothDevice;

__attribute__((visibility("hidden")))
@interface VoiceOverBrailleAssignCommandsControllerViewController : AXUISettingsBaseListController
{
    VOSBluetoothDevice *_device;	// 192 = 0xc0
    SCROBrailleClient *_brailleClient;	// 200 = 0xc8
    SCROMobileBrailleDisplayInputManager *_inputManager;	// 208 = 0xd0
    int _token;	// 216 = 0xd8
    NSArray *_resetSpecifiers;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000b999c
- (id)_specifierForCategory:(id)arg1;	// IMP=0x00000000000b97e4
- (void)resetAllCommandAssignments:(id)arg1;	// IMP=0x00000000000b9768
- (id)specifiers;	// IMP=0x00000000000b9170
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000b911c
- (id)init;	// IMP=0x00000000000b9078

@end
