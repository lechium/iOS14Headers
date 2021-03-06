/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Widgets/Widgets-Structs.h>
@class NSPointerArray, NSString, NSExtension, UIImage;

@interface WGWidgetInfo : NSObject {

	NSPointerArray* _registeredWidgetHosts;
	struct {
		unsigned didInitializeWantsVisibleFrame : 1;
	}  _widgetInfoFlags;
	BOOL _wantsVisibleFrame;
	NSString* _sdkVersion;
	NSExtension* _extension;
	long long _initialDisplayMode;
	long long _largestAllowedDisplayMode;
	UIImage* _icon;
	UIImage* _outlineIcon;
	NSString* _displayName;
	CGSize _preferredContentSize;

}

@property (setter=_setIcon:,getter=_icon,nonatomic,retain) UIImage * icon;                                           //@synthesize icon=_icon - In the implementation block
@property (setter=_setOutlineIcon:,getter=_outlineIcon,nonatomic,retain) UIImage * outlineIcon;                      //@synthesize outlineIcon=_outlineIcon - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                                            //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (setter=_setDisplayName:,nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (getter=_sdkVersion,nonatomic,copy,readonly) NSString * sdkVersion;                                        //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (assign,setter=_setLargestAllowedDisplayMode:,nonatomic) long long largestAllowedDisplayMode;              //@synthesize largestAllowedDisplayMode=_largestAllowedDisplayMode - In the implementation block
@property (assign,setter=_setWantsVisibleFrame:,nonatomic) BOOL wantsVisibleFrame;                                   //@synthesize wantsVisibleFrame=_wantsVisibleFrame - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                                              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetIdentifier; 
@property (nonatomic,readonly) double initialHeight; 
@property (nonatomic,readonly) long long initialDisplayMode;                                                         //@synthesize initialDisplayMode=_initialDisplayMode - In the implementation block
+(id)_productVersion;
+(id)widgetInfoWithExtension:(id)arg1 ;
+(void)_updateRowHeightForContentSizeCategory;
+(double)maximumContentHeightForCompactDisplayMode;
-(void)_resetIcons;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)_outlineIcon;
-(void)_setIcon:(id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)_requestIcon:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1 ;
-(void)requestSettingsIconWithHandler:(/*^block*/id)arg1 ;
-(NSExtension *)extension;
-(id)_sdkVersion;
-(NSString *)displayName;
-(void)updatePreferredContentSize:(CGSize)arg1 forWidgetHost:(id)arg2 ;
-(void)registerWidgetHost:(id)arg1 ;
-(id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(long long)initialDisplayMode;
-(id)widgetInfoWithExtension:(id)arg1 ;
-(CGSize)preferredContentSize;
-(double)initialHeight;
-(void)_setWantsVisibleFrame:(BOOL)arg1 ;
-(void)_resetIconsImpl;
-(BOOL)wantsVisibleFrame;
-(NSString *)widgetIdentifier;
-(void)_setOutlineIcon:(id)arg1 ;
-(id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4 ;
-(id)_icon;
-(long long)largestAllowedDisplayMode;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(void)requestIconWithHandler:(/*^block*/id)arg1 ;
-(void)_setLargestAllowedDisplayMode:(long long)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
@end

