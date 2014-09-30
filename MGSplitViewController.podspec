#
#  Be sure to run `pod spec lint MGSplitViewController.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name          = "MGSplitViewController"
  s.version       = "2.0.0"
  s.summary       = "A flexible, advanced split-view controller for iPad developers."
  s.description   = <<-DESC
                   MGSplitViewController is a replacement for UISplitViewController, with various useful enhancements. Forked from the original by Matt Gemmel.
                   DESC

  s.homepage      = "https://github.com/asprega/MGSplitViewController"
  s.license       = "BSD"
  s.author        = { "Andrea Sprega" => "asprega@vendini.com" }
  s.platform      = :ios, "5.0"
  s.source        = { :git => "https://github.com/asprega/MGSplitViewController.git", :tag => 'v2.0.0' }
  s.source_files  = "Classes", "Classes/**/*.{h,m}"
  s.exclude_files = "Classes/Exclude"
  s.requires_arc  = true
  # s.xcconfig    = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }

end
