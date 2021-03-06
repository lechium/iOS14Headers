/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITableViewCellAccessibility_super.h>

@interface UITableViewCellAccessibility : __UITableViewCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)paste:(id)arg1 ;
-(id)accessibilityLabel;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(double)_accessibilityAllowedGeometryOverlap;
-(double)_accessibilityAllowedGeometryOverlapX;
-(void)_didRemoveSubview:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(id)_accessibilityIndexPath;
-(id)_accessibilityKeyCommands;
-(id)accessibilityPath;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)dealloc;
-(BOOL)_accessibilitySetNativeFocus;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)setAccessoryView:(id)arg1 ;
-(id)preferredFocusedView;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(id)accessibilityUserInputLabels;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_accessoryViewForType:(long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)accessibilityActivationPoint;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)editControlWasClicked:(id)arg1 ;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)accessibilityElementIsFocused;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityIsDescendantOfElement:(id)arg1 ;
-(id)accessibilityHeaderElements;
-(long long)accessibilityElementCount;
-(id)_accessibilityUserTestingChildren;
-(id)accessibilityValue;
-(BOOL)accessibilityScrollToVisible;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1 ;
-(id)_privateAccessibilityCustomActions;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)accessibilityRowRange;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityHasTextOperations;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(BOOL)_accessibilityIsTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityParentTableView;
-(long long)_accessibilityUserTestingChildrenCount;
-(unsigned long long)accessibilityTraits;
-(id)_accessibilityEquivalenceTag;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(BOOL)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1 ;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(void)_accessibilityClearChildren;
-(id)tableTextAccessibleLabel:(id)arg1 ;
-(id)_accessibilityInternalData;
-(id)_axCustomActionsForActions:(id)arg1 ;
-(id)_accessibilityChildren;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(BOOL)_axPerformAction:(id)arg1 ;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(id)tableTextAccessibleStringKey:(id)arg1 ;
-(id)tableTextAccessibleLocalizationBundleID:(id)arg1 ;
-(id)tableTextAccessibleLocalizationBundlePath:(id)arg1 ;
-(id)tableTextAccessibleLocalizedTableName:(id)arg1 ;
-(id)_accessibilityInternalDataRetrieveOnly;
-(void)_axApplyAccessoryType:(long long)arg1 withControl:(id)arg2 ;
-(void)_axSetShouldForceRefreshChildren:(BOOL)arg1 ;
-(id)_accessibilitySubviewsForAddingWithSort:(BOOL)arg1 ;
-(id)_accessibilityUserTestingChildrenInAccessibilitySortedOrder:(BOOL)arg1 ;
-(id)_accessibilityImageViewIfExists;
-(BOOL)_accessibilityIsButton;
-(id)_accessibilityTextLabelIfExists;
-(id)_accessibilityTableViewSwitch;
-(BOOL)_accessibilityIsButtonAccessoryType:(long long)arg1 ;
-(id)_accessibilityNextIndexPath;
-(id)_accessibilityPreviousIndexPath;
-(void)registerMockChild:(id)arg1 ;
-(BOOL)_accessibilityLabelShouldBeDistinct:(id)arg1 ;
-(void)_accessibilityReevaluateChildren;
-(BOOL)_accessibilityTableViewIsOpaque;
-(void)unregisterMockChild:(id)arg1 ;
-(id)_accessibilitySubviewsForAdding;
-(void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2 withPossibleSubviews:(id)arg3 ;
-(void)_accessibilityRemoveInternalData;
-(id)_accessibilityMockParent;
-(BOOL)_accessibilityTableViewCellHidesInsertControl;
-(BOOL)_accessibilityIsRemoveControlVisible;
-(id)_accessibilityCellEditingControl;
-(BOOL)_accessibilityIsRemoveConfirmVisible;
-(id)_accessibilityFindRemoveConfirmSubview;
-(void)_accessibilityHandleRemoveSwitch;
-(void)_accessibilityHandleRemoveConfirm;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(BOOL)_accessibilityAlwaysReturnsChild;
-(id)_accessibilityEditableTextFieldIfExists;
-(BOOL)_accessibilityClientIgnoresReorderControl;
-(id)_accessibilityRetrieveTableViewCellText;
-(id)_accessibilityRetrieveTableViewCellText:(long long)arg1 ;
-(id)_accessibilityRetrieveTableViewCellTextWithLocalizationOptions:(long long)arg1 shouldExcludeDetailText:(BOOL)arg2 ;
-(id)_accessibilityDetailTextLabelIfExists;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(BOOL)accessibilityIsFetchingChildren;
-(void)accessibilitySetIsFetchingChildren:(BOOL)arg1 ;
-(BOOL)_accessibilityUsesOverrideContainerProtocol;
-(id)_accessibilityContainerElements;
-(id)_accessibilityOverrideChildren;
-(BOOL)_axShouldForceRefreshChildren;
-(BOOL)_axSubviewIgnoredDueToHiddenOrZeroAlphaAncestry:(id)arg1 ;
-(BOOL)_accessibilityTableViewCellSubclassShouldExist;
-(BOOL)_accessibilityShouldSortTableViewCellChildren;
-(void)_accessibilityUpdateRemoveControl;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(BOOL)_accessibilityShouldBeEmptyIfHidden;
-(id)_accessibilityRetrieveTableViewCellTextExcludingDetailText;
-(BOOL)_axHasLeadingSwipeActions;
-(BOOL)_axHasTrailingSwipeActions;
-(BOOL)_accessibilitySwipeActionsAllowed;
-(BOOL)_accessibilityHandleDetailButtonPress:(id)arg1 ;
-(BOOL)_accessibilityHasReorderActions;
-(BOOL)_accessibilityHandleReorderMoveUp;
-(BOOL)_accessibilityHandleReorderMoveDown;
-(BOOL)_accessibilityHandleReorderMoveUp:(BOOL)arg1 ;
-(id)_accessibilityPerformableActions;
-(void)_accessibilityHandleReorderMoveUpWithFocus;
-(void)_accessibilityHandleReorderMoveDownWithFocus;
-(id)_accessibilityCellReorderControl;
-(id)_axGetFocusedSubview;
-(void)_axSetFocusedSubview:(id)arg1 ;
-(void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(void)_setAccessibilityMockParent:(id)arg1 ;
-(id)_accessibilityTextElementText;
-(BOOL)_accessibilityPerformSwipeDeleteAction:(id)arg1 ;
@end

