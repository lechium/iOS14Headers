/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CXCallDirectoryManagerDefaultHostProtocol <NSObject>
@required
-(oneway void)getExtensionsWithReply:(/*^block*/id)arg1;
-(oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)launchCallDirectorySettingsWithReply:(/*^block*/id)arg1;
-(oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3;

@end
